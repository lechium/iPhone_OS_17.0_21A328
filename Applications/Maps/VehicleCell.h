//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel, UIStackView, UIView, VehicleBatteryView;

@interface VehicleCell : UITableViewCell
{
    UIImageView *_iconImageView;	// 8 = 0x8
    UIStackView *_stackView;	// 16 = 0x10
    UIView *_iconImageContainerView;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    VehicleBatteryView *_batteryChargeView;	// 40 = 0x28
}

+ (id)reuseIdentifier;	// IMP=0x00400000001e1f6f
- (void).cxx_destruct;	// IMP=0x00200000001e3233
- (void)setupWithVehicle:(id)arg1 cellStyle:(long long)arg2 isSelected:(_Bool)arg3;	// IMP=0x00100000001e2d6d
- (void)_setupStyling;	// IMP=0x00100000001e2bfc
- (void)_setupConstraints;	// IMP=0x00100000001e23d8
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000001e1f7c

@end

