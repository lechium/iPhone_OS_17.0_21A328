//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class NSString, PHCollection, PHPhotoLibrary, PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManager, PXPhotoKitCollectionsDataSourceManagerConfiguration;
@protocol PXImportAlbumPickerDelegate, PXMemoryAssetsActionFactory;

__attribute__((visibility("hidden")))
@interface PUImportAddToLibraryAndAlbumsPickerViewController : UITableViewController
{
    PHCollection *_selectedCollection;	// 8 = 0x8
    PHCollection *_createdAlbum;	// 16 = 0x10
    _Bool _needsDatasourceUpdate;	// 24 = 0x18
    PXPhotoKitCollectionsDataSourceManagerConfiguration *_dataSourceManagerConfiguration;	// 32 = 0x20
    id <PXImportAlbumPickerDelegate> _delegate;	// 40 = 0x28
    PHPhotoLibrary *_photoLibrary;	// 48 = 0x30
    PXPhotoKitCollectionsDataSource *_dataSource;	// 56 = 0x38
    PXPhotoKitCollectionsDataSourceManager *_dataSourceManager;	// 64 = 0x40
}

+ (unsigned long long)cellTypeForPosition:(id)arg1;	// IMP=0x001000000016d8cd
+ (id)dataSourceShiftedIndexPath:(id)arg1;	// IMP=0x001000000016d875
+ (long long)dataSourceOffset;	// IMP=0x001000000016d86a
- (void).cxx_destruct;	// IMP=0x000000000016d5ad
@property(retain, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(retain, nonatomic) PXPhotoKitCollectionsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(nonatomic) __weak id <PXImportAlbumPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXPhotoKitCollectionsDataSourceManagerConfiguration *dataSourceManagerConfiguration; // @synthesize dataSourceManagerConfiguration=_dataSourceManagerConfiguration;
- (_Bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;	// IMP=0x000000000016d505
- (id)undoManagerForActionPerformer:(id)arg1;	// IMP=0x000000000016d4f3
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000016d278
- (void)configureDataSourceManagerConfiguration:(id)arg1;	// IMP=0x000000000016d272
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000016cbf9
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000016c778
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000016c75c
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000016c68e
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;	// IMP=0x000000000016c67d
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000016c4fc
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000016c40f
- (id)posterImageForCollection:(id)arg1 indexPath:(id)arg2 forCellType:(unsigned long long)arg3;	// IMP=0x000000000016c304
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000016c1db
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000016c171
- (void)viewDidLoad;	// IMP=0x000000000016c0b2
- (id)init;	// IMP=0x000000000016c038
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x000000000016bfa9
- (void)_dismissPicker;	// IMP=0x000000000016bf5e
- (void)_updateDatasource;	// IMP=0x000000000016be66
- (id)_userCreatredAlbumsPhotoKitConfiguration;	// IMP=0x000000000016bd1b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <PXMemoryAssetsActionFactory> memoryAssetsActionFactory;
@property(readonly) Class superclass;

@end

