//
//  NSJSONSerialization+NSJSONSerialization.h
//  ios-sprint11-challenge
//
//  Created by De MicheliStefano on 05.10.18.
//  Copyright © 2018 De MicheliStefano. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSJSONSerialization (NSJSONSerialization)

- (NSDictionary *)getSongDictionaryForData:(NSData *)data artist:(NSString *)artist title:(NSString *)title;

@end

NS_ASSUME_NONNULL_END
