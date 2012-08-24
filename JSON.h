//
//  JSON.h
//  Timbrr
//
//  Created by Max Kramer on 22/11/2011.
//  Copyright (c) Max Kramer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (JSON)
- (id) JSONValue;
@end

@implementation NSString (JSON)
- (id) JSONValue {
    NSError *error = nil;
    id obj = [NSJSONSerialization JSONObjectWithData:[self dataUsingEncoding:NSUTF8StringEncoding] options:NSJSONReadingMutableContainers error:&error];
    if (error)
        NSLog(@"%@", [error description]);
    return obj;
} 
@end

@interface NSData (JSON)
- (id) JSONValue;
@end

@implementation NSData (JSON)
- (id) JSONValue {
    NSError *error = nil;
    id obj = [NSJSONSerialization JSONObjectWithData:self options:NSJSONReadingMutableContainers error:&error];
    if (error)
        NSLog(@"%@", [error description]);
    return obj;
}
@end

