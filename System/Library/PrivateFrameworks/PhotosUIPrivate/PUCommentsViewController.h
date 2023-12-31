//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, PUAssetViewModel, PUCommentsTableDataController, UITableView;
@protocol PUAccessoryContentViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUCommentsViewController : UIViewController
{
    _Bool __needsUpdateTableViewScrollPosition;	// 8 = 0x8
    id <PUAccessoryContentViewControllerDelegate> _accessoryContentViewControllerDelegate;	// 16 = 0x10
    PUAssetViewModel *_assetViewModel;	// 24 = 0x18
    UITableView *__tableView;	// 32 = 0x20
    PUCommentsTableDataController *__tableDataController;	// 40 = 0x28
    struct UIEdgeInsets _contentInsets;	// 48 = 0x30
}

+ (_Bool)canShowCommentsForAsset:(id)arg1;	// IMP=0x00100000001be97d
- (void).cxx_destruct;	// IMP=0x00000000001be8ea
@property(nonatomic, setter=_setNeedsUpdateTableViewScrollPosition:) _Bool _needsUpdateTableViewScrollPosition; // @synthesize _needsUpdateTableViewScrollPosition=__needsUpdateTableViewScrollPosition;
@property(readonly, nonatomic) PUCommentsTableDataController *_tableDataController; // @synthesize _tableDataController=__tableDataController;
@property(readonly, nonatomic) UITableView *_tableView; // @synthesize _tableView=__tableView;
@property(readonly, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) __weak id <PUAccessoryContentViewControllerDelegate> accessoryContentViewControllerDelegate; // @synthesize accessoryContentViewControllerDelegate=_accessoryContentViewControllerDelegate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000001be790
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000001be756
@property(readonly, nonatomic) struct CGSize minimumContentSize;
- (struct CGRect)contentBoundsInCoordinateSpace:(id)arg1;	// IMP=0x00000000001be54a
- (_Bool)contentAreaContainsPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x00000000001be489
- (void)setContentInsets:(struct UIEdgeInsets)arg1 changeReason:(long long)arg2;	// IMP=0x00000000001be2b1
- (void)commentsTableDataController:(id)arg1 presentViewController:(id)arg2;	// IMP=0x00000000001be294
- (void)commentsTableDataController:(id)arg1 tableViewDidScroll:(id)arg2;	// IMP=0x00000000001be209
- (void)commentsTableDataController:(id)arg1 didChangeEditing:(_Bool)arg2;	// IMP=0x00000000001be16c
- (void)_updateTableDataController;	// IMP=0x00000000001be09a
- (struct CGSize)preferredContentSize;	// IMP=0x00000000001bdffc
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000001bdfb6
- (void)viewDidLoad;	// IMP=0x00000000001bdcdf
- (id)initWithAssetViewModel:(id)arg1;	// IMP=0x00000000001bdc05
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001bdb82
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000001bdaf2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

