//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SPOwner/NSObject-Protocol.h>

@class NSError, SPBTRSSIMeasurement, SPBTRSSIResult;

@protocol SPBTFindingXPCClientProtocol <NSObject>
- (void)findingSessionError:(NSError *)arg1;
- (void)updatedBTRSSIResult:(SPBTRSSIResult *)arg1;
- (void)updatedBTRSSIMeasurement:(SPBTRSSIMeasurement *)arg1;
@end
