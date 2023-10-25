//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBActivityAlert, SBActivityItem;

@protocol SBActivityAmbientObserverDelegate <NSObject>
- (void)dismissAmbientActivityAlert:(SBActivityAlert *)arg1;
- (void)presentAmbientActivityAlert:(SBActivityAlert *)arg1;
- (void)removeActivityItem:(SBActivityItem *)arg1;
- (void)addActivityItem:(SBActivityItem *)arg1 forOngoingActivity:(_Bool)arg2;
@end
