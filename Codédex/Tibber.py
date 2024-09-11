import requests
import json

# Replace YOUR_ACCESS_TOKEN with your actual access token
headers = {'Authorization': 'Bearer 8u8J0I6qmMqMBBz4xdmFsqRMWfEmY3FsOu8r07bELNk', 'Content-Type': 'application/json'}

# Make a POST request to the Tibber API to get the current price
response = requests.post('https://api.tibber.com/v1-beta/gql', headers=headers, json={
    "query": "query { viewer { homes { currentSubscription { priceInfo { current { total } } } } } }"
})

# check the status code of the response
if response.status_code != 200:
    print(f'Error: {response.status_code}, {response.text}')
    exit()

# Parse the JSON response
try:
    data = response.json()
    current_price = data['data']['viewer']['homes'][0]['currentSubscription']['priceInfo']['current']['total']
    print(f'Current price: {current_price}')
except KeyError as e:
    print(f'Error: {e}')
