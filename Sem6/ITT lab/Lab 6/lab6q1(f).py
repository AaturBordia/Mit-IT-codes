import os
print(os.environ['COMPUTERNAME'])
print(os.environ.get('USERPROFILE'))
print(os.environ.get('DATABASE_NAME', 'example.database.net'))
