//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;

@interface NavSecondaryDrivingSignView
{
    _Bool _showMirroredPrimaryManeuver;	// 8 = 0x8
}

@property(readonly, nonatomic, getter=isShowingMirroredPrimaryManeuver) _Bool showMirroredPrimaryManeuver; // @synthesize showMirroredPrimaryManeuver=_showMirroredPrimaryManeuver;
- (void)mirrorPrimaryManeuver:(id)arg1;	// IMP=0x00100000008e18f8
@property(readonly, nonatomic) UIView *viewToAlignTextLeadingWithPrimarySign;
- (void)_setManeuverGuidanceInfo:(id)arg1 mirroredPrimary:(_Bool)arg2;	// IMP=0x00100000008e1873
- (void)_updateLabelText;	// IMP=0x00100000008e17b0
- (void)_setupSubviews;	// IMP=0x00100000008e163b
- (id)_defaultSignLayoutDelegate;	// IMP=0x00100000008e1622

@end

