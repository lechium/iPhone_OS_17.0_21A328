//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class NSObject, NSString, UITableView;
@protocol CNPhotoPickerListCollectionViewCellDelegate;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerListCollectionViewCell : UICollectionViewCell
{
    NSObject<CNPhotoPickerListCollectionViewCellDelegate> *_selectionDelegate;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    struct UIEdgeInsets _contentInset;	// 24 = 0x18
}

+ (id)cellIdentifier;	// IMP=0x00100000002c0041
- (void).cxx_destruct;	// IMP=0x00000000002c0010
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(retain, nonatomic) NSObject<CNPhotoPickerListCollectionViewCellDelegate> *selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002bfd54
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000002bfcb7
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000002bfcac
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002bfc8a
- (void)updateConstraints;	// IMP=0x00000000002bf8eb
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002bf789
- (void)reloadData;	// IMP=0x00000000002bf74c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
