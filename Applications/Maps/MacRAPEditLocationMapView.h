//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIButton;

@interface MacRAPEditLocationMapView
{
    UIButton *_mapModeButton;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000007065b1
@property(retain, nonatomic) UIButton *mapModeButton; // @synthesize mapModeButton=_mapModeButton;
- (void)setupDescriptionViewAndAdditionalConstraints;	// IMP=0x00100000007062d9
- (void)setupMenuActions;	// IMP=0x00100000007060a5
- (id)mapActionForViewMode:(long long)arg1;	// IMP=0x0010000000705dd4
- (id)initWithMapRect:(CDStruct_02837cd9)arg1 viewMode:(long long)arg2 markerViewAttributes:(id)arg3;	// IMP=0x0010000000705610

@end
