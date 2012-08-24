Easy-JSON for iOS 5
===================

This helper class allows you to easily make use of the JSON functions found in the iOS 5 SDK, by adding a JSONValue category to NSString and NSData. 

This is a substitute for using SBJSON and JSONKit and uses NSJSONSerialization.

**Usage** 

In order to use the helper, all you need to do is call `JSONValue` on an `NSString` or `NSData` variable.


	#import "JSON.h"
	
	…
	
	id responseObject = [responseString JSONValue];
	
	id responseObject = [responseData JSONValue];



Copyright &copy; Max Kramer 2011