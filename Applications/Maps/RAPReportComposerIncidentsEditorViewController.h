//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RAPEditLocationViewController, RAPIncidentsQuestion, RAPReportComposerCommentPart, RAPReportComposerMapFeaturePickerPart;

@interface RAPReportComposerIncidentsEditorViewController
{
    RAPIncidentsQuestion *_question;	// 8 = 0x8
    RAPEditLocationViewController *_mapPicker;	// 16 = 0x10
    RAPReportComposerMapFeaturePickerPart *_labelMarkerPickerPart;	// 24 = 0x18
    RAPReportComposerCommentPart *_commentPart;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000007d0fa2
- (void)_presentMapPicker;	// IMP=0x00100000007d0c28
- (void)inlineMapViewModelRequestsDisplayPowerActions:(id)arg1;	// IMP=0x00100000007d0c16
- (id)tableParts;	// IMP=0x00100000007d09e0
@property(readonly, nonatomic) int analyticTarget;
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000007d08f6

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
