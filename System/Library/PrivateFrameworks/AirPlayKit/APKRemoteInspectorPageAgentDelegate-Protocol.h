//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class APKRemoteInspectorPageAgent, NSString;

@protocol APKRemoteInspectorPageAgentDelegate
- (void)pageAgent:(APKRemoteInspectorPageAgent *)arg1 onResourceContentRequestWithIdentifier:(NSString *)arg2 completion:(void (^)(NSString *, _Bool, NSError *))arg3;
- (void)pageAgent:(APKRemoteInspectorPageAgent *)arg1 onResourcesRequestWithCompletion:(void (^)(NSArray *, NSError *))arg2;
@end
