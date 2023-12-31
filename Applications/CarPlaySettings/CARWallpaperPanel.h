//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CARSettingsCellSpecifier, CRVehicle, NSArray;

@interface CARWallpaperPanel
{
    CARSettingsCellSpecifier *_cellSpecifier;	// 8 = 0x8
    CRVehicle *_vehicle;	// 16 = 0x10
    NSArray *_sections;	// 24 = 0x18
    struct CGSize _cachedEffectiveSectionInsetLayoutSize;	// 32 = 0x20
    struct UIEdgeInsets _cachedEffectiveSectionInset;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000007fc8
@property(nonatomic) struct CGSize cachedEffectiveSectionInsetLayoutSize; // @synthesize cachedEffectiveSectionInsetLayoutSize=_cachedEffectiveSectionInsetLayoutSize;
@property(nonatomic) struct UIEdgeInsets cachedEffectiveSectionInset; // @synthesize cachedEffectiveSectionInset=_cachedEffectiveSectionInset;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) CRVehicle *vehicle; // @synthesize vehicle=_vehicle;
- (id)_newPreviewPanelForWallpaper:(id)arg1;	// IMP=0x0010000000007e83
- (void)invalidate;	// IMP=0x0010000000007e42
- (struct UIEdgeInsets)effectiveSectionHeaderInset;	// IMP=0x0010000000007df9
- (struct UIEdgeInsets)effectiveSectionInset;	// IMP=0x0010000000007536
- (struct UIEdgeInsets)sectionInset;	// IMP=0x001000000000750d
- (unsigned long long)numberOfRows;	// IMP=0x0010000000007502
- (unsigned long long)numberOfColumns;	// IMP=0x00100000000074f7
- (id)specifierSections;	// IMP=0x0010000000006fb7
- (id)cellSpecifier;	// IMP=0x0010000000006e0c
- (id)initWithVehicle:(id)arg1 panelController:(id)arg2;	// IMP=0x0010000000006d94

@end

