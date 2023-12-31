//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SPOwner/NSObject-Protocol.h>

@class NSArray, SPBTFindingSessionConfig;

@protocol SPBTFindingXPCProtocol <NSObject>
- (void)stop:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)start:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateConfig:(SPBTFindingSessionConfig *)arg1 completion:(void (^)(NSError *))arg2;
@end

