//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDRequestDetails;

@protocol DNDRemoteServiceServerStateProtocol <NSObject>
- (void)queryStateForUpdateWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(DNDState *, NSError *))arg2;
- (void)queryStateWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(DNDState *, NSError *))arg2;
@end
