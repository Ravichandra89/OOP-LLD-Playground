import nltk
from nltk.corpus import stopwords
from nltk.stem import PorterStemmer, SnowballStemmer
from sklearn.feature_extraction.text import TfidfVectorizer

# Download NLTK stopwords
def download_resources():
    nltk.download('stopwords')
    nltk.download('punkt')

# Step 1: Input Documents
documents = [
    "I got selected in a XYZ company",
    "I am proud citizen of India",
    "I love my city jodhpur which is blue city out of all cities in India"
]

# Step 2: Stopwords Count
stop_words = set(stopwords.words('english'))
stopword_freq = {}

def count_stopwords(documents):
    for doc in documents:
        words = nltk.word_tokenize(doc.lower())
        for word in words:
            if word in stop_words:
                stopword_freq[word] = stopword_freq.get(word, 0) + 1

# Step 3: Calculate TF-IDF
def calculate_tfidf(documents):
    vectorizer = TfidfVectorizer(stop_words=stop_words)
    tfidf_matrix = vectorizer.fit_transform(documents)
    tfidf_values = tfidf_matrix.toarray()
    tfidf_vocab = vectorizer.get_feature_names_out()
    return tfidf_vocab, tfidf_values

# Step 4: Stemming and Stopword Removal
def apply_stemming(documents):
    porter = PorterStemmer()
    snowball = SnowballStemmer(language='english')
    stemmed_documents = []

    for doc in documents:
        words = nltk.word_tokenize(doc.lower())
        filtered_words = [porter.stem(snowball.stem(word)) for word in words if word not in stop_words]
        stemmed_documents.append(" ".join(filtered_words))

    return stemmed_documents

# Download resources
download_resources()

# Count stopwords
count_stopwords(documents)

# Calculate TF-IDF
tfidf_vocab, tfidf_values = calculate_tfidf(documents)

# Apply stemming and remove stopwords
stemmed_documents = apply_stemming(documents)

# Print results
print("- Stopwords with frequency:")
print(stopword_freq)
print()

print("- TF-IDF Values:")
for i, doc_tfidf in enumerate(tfidf_values):
    print(f"Document {i + 1}:")
    for word, value in zip(tfidf_vocab, doc_tfidf):
        if value > 0:
            print(f"  {word}: {value:.4f}")
print()

print("- Documents after stemming and stopword removal:")
for i, doc in enumerate(stemmed_documents):
    print(f"Document {i + 1}: {doc}")