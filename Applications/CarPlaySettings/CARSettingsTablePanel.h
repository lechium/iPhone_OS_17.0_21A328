//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CARSettingsPanelTableSource, CARTableView, NSArray;

@interface CARSettingsTablePanel
{
    _Bool _showCellImages;	// 8 = 0x8
    NSArray *_cellSpecifiers;	// 16 = 0x10
    NSArray *_specifierSections;	// 24 = 0x18
    CARTableView *_tableView;	// 32 = 0x20
    CARSettingsPanelTableSource *_tableSource;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000000f92f
@property(retain, nonatomic) CARSettingsPanelTableSource *tableSource; // @synthesize tableSource=_tableSource;
@property(retain, nonatomic) CARTableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) _Bool showCellImages; // @synthesize showCellImages=_showCellImages;
@property(readonly, nonatomic) NSArray *specifierSections; // @synthesize specifierSections=_specifierSections;
@property(readonly, nonatomic) NSArray *cellSpecifiers; // @synthesize cellSpecifiers=_cellSpecifiers;
- (void)_performBatchUpdatesForReloadIndexPaths:(id)arg1 insertIndexPaths:(id)arg2 removeIndexPaths:(id)arg3;	// IMP=0x001000000000f682
- (void)reloadSpecifiers;	// IMP=0x001000000000eac7
- (id)preferredFocusEnvironments;	// IMP=0x001000000000e94a
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x001000000000e86a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000000e7ce
- (void)viewDidLoad;	// IMP=0x001000000000e052

@end

