//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CollectionPickerViewController, CollectionSaveSession, NSString, UIAlertController, UIView, UIViewController;
@protocol CollectionPickerDelegate;

@interface CollectionPicker : NSObject
{
    CollectionPickerViewController *_pickerViewController;	// 8 = 0x8
    UIAlertController *_alertController;	// 16 = 0x10
    UIView *_sourceView;	// 24 = 0x18
    struct CGRect _sourceRect;	// 32 = 0x20
    id <CollectionPickerDelegate> _delegate;	// 64 = 0x40
    CollectionSaveSession *_editSession;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000022de84
@property(retain, nonatomic) CollectionSaveSession *editSession; // @synthesize editSession=_editSession;
@property(nonatomic) __weak id <CollectionPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionPickerViewController:(id)arg1 unselectCollection:(id)arg2;	// IMP=0x001000000022dddd
- (void)collectionPickerViewController:(id)arg1 selectCollection:(id)arg2;	// IMP=0x001000000022da1c
- (void)cleanControllers;	// IMP=0x001000000022d9e3
@property(readonly, nonatomic) UIViewController *viewController;
- (id)initWithCollectionEditSession:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3;	// IMP=0x001000000022d4df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

