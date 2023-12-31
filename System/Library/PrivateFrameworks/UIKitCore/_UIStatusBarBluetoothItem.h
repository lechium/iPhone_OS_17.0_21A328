//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarImageView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBluetoothItem
{
    _UIStatusBarImageView *_batteryImageView;	// 8 = 0x8
}

+ (_Bool)alwaysShowRegulatoryBluetoothIndicator;	// IMP=0x00400000010f5e10
+ (id)batteryDisplayIdentifier;	// IMP=0x00400000010f5d63
- (void).cxx_destruct;	// IMP=0x00000000010f68bf
@property(retain, nonatomic) _UIStatusBarImageView *batteryImageView; // @synthesize batteryImageView=_batteryImageView;
- (id)viewForIdentifier:(id)arg1;	// IMP=0x00000000010f6801
- (void)_create_batteryImageView;	// IMP=0x00000000010f67a7
- (id)_batteryFillColorForEntry:(id)arg1 usingTintColor:(id)arg2;	// IMP=0x00000000010f66ac
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x00000000010f5e53
- (id)systemImageNameForUpdate:(id)arg1;	// IMP=0x00000000010f5d90
- (id)indicatorEntryKey;	// IMP=0x00000000010f5d7c

@end

