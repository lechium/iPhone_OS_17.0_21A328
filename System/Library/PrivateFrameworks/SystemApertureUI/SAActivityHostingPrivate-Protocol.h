//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemApertureUI/SAActivityHosting-Protocol.h>

@class NSArray, NSString;
@protocol SAAutomaticallyInvalidatable;

@protocol SAActivityHostingPrivate <SAActivityHosting>
@property(readonly, copy, nonatomic) NSArray *temporallyOrderedAlertingActivityAssertions;
- (id <SAAutomaticallyInvalidatable>)systemManagedAlertingActivityAssertionWithReason:(NSString *)arg1;
@end

