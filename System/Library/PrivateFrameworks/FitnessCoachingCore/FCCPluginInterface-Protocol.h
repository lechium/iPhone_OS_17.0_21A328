//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FitnessCoachingCore/NSObject-Protocol.h>

@class NSData;

@protocol FCCPluginInterface <NSObject>
- (void)pluginMessage:(unsigned long long)arg1 data:(NSData *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

