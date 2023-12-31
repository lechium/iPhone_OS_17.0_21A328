//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXActivity.h>

@class NSString, UIDocumentPickerViewController;

__attribute__((visibility("hidden")))
@interface PUExportUnmodifiedOriginalsActivity : PXActivity
{
    UIDocumentPickerViewController *_cachedDocumentPickerViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000f6ca7
@property(retain, nonatomic) UIDocumentPickerViewController *cachedDocumentPickerViewController; // @synthesize cachedDocumentPickerViewController=_cachedDocumentPickerViewController;
- (void)documentPickerWasCancelled:(id)arg1;	// IMP=0x00000000000f6c6e
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;	// IMP=0x00000000000f6c57
- (id)_createDocumentPickerViewControllerForExportedItems:(id)arg1;	// IMP=0x00000000000f67ed
- (id)activityViewController;	// IMP=0x00000000000f67db
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x00000000000f678f
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00000000000f6707
- (id)_systemImageName;	// IMP=0x00000000000f66fa
- (id)activityTitle;	// IMP=0x00000000000f6665
- (id)activityType;	// IMP=0x00000000000f6651

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

