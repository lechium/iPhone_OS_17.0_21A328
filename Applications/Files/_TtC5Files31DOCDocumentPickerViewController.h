//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;
@protocol _TtP5Files25DOCDocumentPickerDelegate_;

@interface _TtC5Files31DOCDocumentPickerViewController
{
    MISSING_TYPE *pickerDelegate;	// 8 = 0x8
    MISSING_TYPE *didConfirmOrCancel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00400000001ec6b0
- (id)initWithStyle:(long long)arg1;	// IMP=0x00100000001ec650
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000001ec620
- (id)initWithConfiguration:(id)arg1 sourceObserver:(id)arg2;	// IMP=0x00100000001ec5e0
- (void)documentBrowser:(id)arg1 didPickDocumentsAtURLs:(id)arg2;	// IMP=0x00100000001ec560
- (MISSING_TYPE *)viewDidDisappear: /* Error: Ran out of types for this method. */;	// IMP=0x00100000001ec4c0
- (id)initWithConfiguration:(id)arg1 context:(id)arg2;	// IMP=0x00100000001ec480
@property(nonatomic) __weak id <_TtP5Files25DOCDocumentPickerDelegate_> pickerDelegate; // @synthesize pickerDelegate;

@end

