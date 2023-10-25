//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SwiftUI/UIFocusEnvironment-Protocol.h>

@class NSArray;

@protocol _UIFocusEnvironmentPrivate <UIFocusEnvironment>

@optional
@property(readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property(readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property(readonly, nonatomic, getter=_isEligibleForFocusOcclusion) _Bool eligibleForFocusOcclusion;
@property(readonly, nonatomic, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
@property(nonatomic) _Bool areChildrenFocused;
- (long long)_rotaryFocusMovementAxis;
- (void)_setNeedsNonDeferredFocusUpdate;
- (_Bool)_allowsFocusToLeaveViaHeading:(unsigned long long)arg1;
@end
