//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivityViewController.h>

@class NSArray, NSString;

@interface SSSActivityViewController : UIActivityViewController
{
    _Bool _pdfCanBeConvertedToImage;	// 8 = 0x8
    NSArray *_activityItemProviders;	// 16 = 0x10
    long long _editMode;	// 24 = 0x18
    long long _shareAsOption;	// 32 = 0x20
    NSString *_renameOption;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001cfee
@property(readonly, nonatomic) _Bool pdfCanBeConvertedToImage; // @synthesize pdfCanBeConvertedToImage=_pdfCanBeConvertedToImage;
@property(retain, nonatomic) NSString *renameOption; // @synthesize renameOption=_renameOption;
@property(nonatomic) long long shareAsOption; // @synthesize shareAsOption=_shareAsOption;
@property(nonatomic) long long editMode; // @synthesize editMode=_editMode;
@property(retain, nonatomic) NSArray *activityItemProviders; // @synthesize activityItemProviders=_activityItemProviders;
- (id)_bestFormatForScreenshotItemProvider:(id)arg1;	// IMP=0x001000000001ce05
- (id)_updateItemProvidersWithOptions;	// IMP=0x001000000001cab5
- (void)didChangeShareOptions;	// IMP=0x001000000001ca11
- (void)didChangeRenameOption;	// IMP=0x001000000001c884
- (id)renameGroup;	// IMP=0x001000000001c44f
- (id)sendAsGroup;	// IMP=0x001000000001c017
- (id)_customizationGroupsForActivityViewController:(id)arg1;	// IMP=0x001000000001bf52
- (_Bool)_customizationAvailableForActivityViewController:(id)arg1;	// IMP=0x001000000001bf4a
- (void)reportStatistics;	// IMP=0x001000000001bde1
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000001bce2
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 editMode:(long long)arg3;	// IMP=0x001000000001bb6c
- (_Bool)isSharingMixedScreenshots;	// IMP=0x001000000001baff
- (_Bool)isSharingMultipleScreenScreenshots;	// IMP=0x001000000001ba93
- (_Bool)isSharingSingleScreenScreenshot;	// IMP=0x001000000001ba27
- (_Bool)isSharingSingleFullPageScreenshotAsPDFUsingAutomatic;	// IMP=0x001000000001b9d9
- (_Bool)isSharingSingleFullPageScreenshotAsImageUsingAutomatic;	// IMP=0x001000000001b98b
- (_Bool)isSharingSingleFullPageScreenshot;	// IMP=0x001000000001b91e
- (_Bool)screenshotItemProvidersContainsPDFAsImage;	// IMP=0x001000000001b7e0
- (_Bool)screenshotItemProvidersContainsPDF;	// IMP=0x001000000001b6a2
- (_Bool)didRenameScreenshot;	// IMP=0x001000000001b65a
- (id)screenshots;	// IMP=0x001000000001b44e
- (id)screenshotItemProviders;	// IMP=0x001000000001b2a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

