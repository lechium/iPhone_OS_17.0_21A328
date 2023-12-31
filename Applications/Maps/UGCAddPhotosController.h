//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PhotoOptionsPicker, UIImagePickerController, UIViewController;
@protocol UGCAddPhotosControllerDelegate;

@interface UGCAddPhotosController : NSObject
{
    UIImagePickerController *_imagePicker;	// 8 = 0x8
    PhotoOptionsPicker *_photoOptionsPicker;	// 16 = 0x10
    UIViewController *_presentingViewController;	// 24 = 0x18
    long long _initialSourceType;	// 32 = 0x20
    unsigned long long _multipleSelectionLimit;	// 40 = 0x28
    id <UGCAddPhotosControllerDelegate> _delegate;	// 48 = 0x30
    unsigned long long _maximumCount;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000008934b6
@property(nonatomic) unsigned long long maximumCount; // @synthesize maximumCount=_maximumCount;
- (void)_captureUserAction:(int)arg1;	// IMP=0x0010000000893481
- (void)photoOptionsPickerDidSelectTakePhoto:(id)arg1;	// IMP=0x00100000008933f4
- (void)photoOptionsPickerDidSelectAddFromLibrary:(id)arg1;	// IMP=0x0010000000893367
- (void)photoOptionsPickerDidCancel:(id)arg1;	// IMP=0x00100000008932fa
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000893207
- (void)_imagePickerDidRetake:(id)arg1;	// IMP=0x00100000008931f0
- (void)_handleAddFromCameraWithImageData:(id)arg1 mediaInfo:(id)arg2;	// IMP=0x0010000000892ecc
- (void)_handleAddFromLibraryWithEditingInfoList:(id)arg1;	// IMP=0x0010000000892b5f
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;	// IMP=0x0010000000892b08
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x001000000089293c
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0010000000892906
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x001000000089287f
- (void)_presentImagePickerWithSourceType:(long long)arg1;	// IMP=0x001000000089259f
- (void)present;	// IMP=0x0010000000892399
- (void)_resolveInitialSourceTypeIfNeeded;	// IMP=0x0010000000892351
- (id)initWithPresentingViewController:(id)arg1 sourceType:(long long)arg2 multipleSelectionLimit:(unsigned long long)arg3 delegate:(id)arg4;	// IMP=0x0010000000892244

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

