//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CARDebugCollectionConfig, CARSettingsCellSpecifier, MISSING_TYPE, NSArray;

@interface CARDebugSettingsCollectionPanel
{
    CARSettingsCellSpecifier *_cellSpecifier;	// 8 = 0x8
    NSArray *_colors;	// 16 = 0x10
    CARDebugCollectionConfig *_config;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000021ec2
@property(retain, nonatomic) CARDebugCollectionConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (double)minimumInteritemSpacing;	// IMP=0x0010000000021c86
- (double)minimumLineSpacing;	// IMP=0x0010000000021c36
- (struct UIEdgeInsets)sectionInset;	// IMP=0x0010000000021bda
- (unsigned long long)numberOfRows;	// IMP=0x0010000000021b96
- (MISSING_TYPE *)numberOfColumns;	// IMP=0x0010000000021b52
- (id)cellSpecifiers;	// IMP=0x00100000000218c2
- (void)_refreshConfig;	// IMP=0x001000000002186d
- (void)invalidate;	// IMP=0x0010000000021823
- (id)initWithPanelController:(id)arg1;	// IMP=0x001000000002178a
- (id)cellSpecifier;	// IMP=0x0010000000021633

@end

