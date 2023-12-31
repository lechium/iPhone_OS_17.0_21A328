//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UILabel;
@protocol RoutePlanningWaypointPillViewEVInfoProviding;

@interface RoutePlanningWaypointPillView : UIView
{
    UILabel *_textLabel;	// 8 = 0x8
    id <RoutePlanningWaypointPillViewEVInfoProviding> _waypointInfoProvider;	// 16 = 0x10
    double _boundsHeight;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000a4a370
@property(nonatomic) double boundsHeight; // @synthesize boundsHeight=_boundsHeight;
- (id)_attributedBatteryChargeStringForBatteryPercentage:(unsigned int)arg1;	// IMP=0x0010000000a4a064
- (id)_attributedTitleTextForWaypointAtIndex:(unsigned long long)arg1 withInfoProvider:(id)arg2;	// IMP=0x0010000000a49d8a
- (void)layoutSubviews;	// IMP=0x0010000000a49cd1
- (id)initWithWaypointIndex:(unsigned long long)arg1 waypointInfoProvider:(id)arg2;	// IMP=0x0010000000a497f0

@end

