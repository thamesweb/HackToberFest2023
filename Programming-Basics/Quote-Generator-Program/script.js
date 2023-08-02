const quoteTextElement = document.getElementById('quoteText');
const quoteAuthorElement = document.getElementById('quoteAuthor');
const generateBtn = document.getElementById('generateBtn');
const shareBtn = document.getElementById('shareBtn');
const copyBtn = document.getElementById('copyBtn');

// JavaScript code as provided in the previous responses


// Function to fetch a random quote from the "type.fit" Quote API
async function getQuote() {
    try {
      const response = await fetch('https://type.fit/api/quotes');
      const data = await response.json();
      const randomIndex = Math.floor(Math.random() * data.length);
      const quote = data[randomIndex];
      quoteTextElement.textContent = `"${quote.text}"`;
      quoteAuthorElement.textContent = `- ${quote.author || 'Unknown'}`;
    } catch (error) {
      quoteTextElement.textContent = 'Failed to fetch a quote. Please try again later.';
      quoteAuthorElement.textContent = '';
    }
  }
// Same as before...

// Function to share the quote on Twitter
function shareOnTwitter() {
  const quoteText = encodeURIComponent(quoteTextElement.textContent);
  const quoteAuthor = encodeURIComponent(quoteAuthorElement.textContent.replace('- ', ''));
  const twitterUrl = `https://twitter.com/intent/tweet?text=${quoteText} - ${quoteAuthor}`;
  window.open(twitterUrl, '_blank');
}

// Function to copy the quote to clipboard
// Function to copy the quote to clipboard
function copyToClipboard() {
    const quoteToCopy = `"${quoteTextElement.textContent}" - ${quoteAuthorElement.textContent}`;
    const tempTextArea = document.createElement('textarea');
    tempTextArea.value = quoteToCopy;
    document.body.appendChild(tempTextArea);
    tempTextArea.select();
    document.execCommand('copy');
    document.body.removeChild(tempTextArea);
  
    // Show success message
    const successMessage = document.createElement('div');
    successMessage.textContent = 'Quote copied to clipboard!';
    successMessage.classList.add('success-message');
    document.body.appendChild(successMessage);
  
    // Remove the success message after a few seconds
    setTimeout(() => {
      document.body.removeChild(successMessage);
    }, 2000);
  }
  

// Event listeners for the "Generate Quote", "Share", and "Copy" buttons
generateBtn.addEventListener('click', getQuote);
shareBtn.addEventListener('click', shareOnTwitter);
copyBtn.addEventListener('click', copyToClipboard);

// Initial quote load on page load
getQuote();
