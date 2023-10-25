//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSHashable-Protocol.h"

@class AMSBinaryPromise, AMSPromise, NSString, NSURL;
@protocol AMSDCloudDataDatabase, AMSDCloudDataShareToken;

@protocol AMSDCloudDataContainer <AMSHashable>
@property(readonly, nonatomic) id <AMSDCloudDataDatabase> sharedDatabase;
@property(readonly, nonatomic) id <AMSDCloudDataDatabase> publicDatabase;
@property(readonly, nonatomic) id <AMSDCloudDataDatabase> privateDatabase;
@property(readonly, nonatomic) NSString *identifier;
- (AMSPromise *)status;
- (AMSBinaryPromise *)acceptShareURL:(NSURL *)arg1 withToken:(id <AMSDCloudDataShareToken>)arg2;
@end
