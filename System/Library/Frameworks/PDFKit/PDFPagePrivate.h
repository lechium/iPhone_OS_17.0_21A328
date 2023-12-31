//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSDictionary, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, PDFAKPageAdaptor, PDFDetectedForm, PDFDocument, PDFView;

__attribute__((visibility("hidden")))
@interface PDFPagePrivate : NSObject
{
    PDFDocument *document;	// 8 = 0x8
    struct CGPDFPage *page;	// 16 = 0x10
    struct CGColor *pageBackgroundColorHint;	// 24 = 0x18
    PDFView *view;	// 32 = 0x20
    NSString *label;	// 40 = 0x28
    struct CGImage *pageImage;	// 48 = 0x30
    NSDictionary *pageImageOptions;	// 56 = 0x38
    struct os_unfair_lock_s layoutLock;	// 64 = 0x40
    struct CGPDFLayout *layout;	// 72 = 0x48
    _Atomic _Bool builtLayout;	// 80 = 0x50
    struct os_unfair_lock_s dataDetectorsLock;	// 84 = 0x54
    _Bool ranDataDetectors;	// 88 = 0x58
    NSString *text;	// 96 = 0x60
    NSAttributedString *attributedString;	// 104 = 0x68
    _Bool displaysAnnotations;	// 112 = 0x70
    _Bool displaysMarkups;	// 113 = 0x71
    NSMutableArray *annotations;	// 120 = 0x78
    _Atomic _Bool loadedAnnotations;	// 128 = 0x80
    NSLock *lock_getAnnotations;	// 136 = 0x88
    NSLock *lock_accessAnnotations;	// 144 = 0x90
    NSMutableArray *detectedAnnotations;	// 152 = 0x98
    long long rotation;	// 160 = 0xa0
    struct CGRect mediaBox;	// 168 = 0xa8
    struct CGRect cropBox;	// 200 = 0xc8
    struct CGRect bleedBox;	// 232 = 0xe8
    struct CGRect trimBox;	// 264 = 0x108
    struct CGRect artBox;	// 296 = 0x128
    struct CGDisplayList *displayList;	// 328 = 0x148
    _Bool creatingDisplayList;	// 336 = 0x150
    NSMutableArray *createDisplayListCompletionBlocks;	// 344 = 0x158
    struct os_unfair_lock_s displayListMutex;	// 352 = 0x160
    _Bool bookmarked;	// 356 = 0x164
    _Bool isFullyConstructed;	// 357 = 0x165
    _Bool colorWidgetBackgrounds;	// 358 = 0x166
    PDFAKPageAdaptor *akPageAdaptor;	// 360 = 0x168
    _Bool akDidSetupRealPageModelController;	// 368 = 0x170
    NSMutableArray *annotationChanges;	// 376 = 0x178
    NSMutableSet *changedAnnotations;	// 384 = 0x180
    NSMutableDictionary *widgetAnnotationLookup;	// 392 = 0x188
    struct os_unfair_lock_s widgetAnnotationLookupLock;	// 400 = 0x190
    NSMutableArray *scannerResults;	// 408 = 0x198
    _Bool didChangeBounds;	// 416 = 0x1a0
    BOOL candidateForOCR;	// 417 = 0x1a1
    _Bool requestedOCR;	// 418 = 0x1a2
    _Bool textFromOCR;	// 419 = 0x1a3
    _Bool didPerformOCR;	// 420 = 0x1a4
    BOOL candidateForFormDetection;	// 421 = 0x1a5
    _Bool didPerformFormDetection;	// 422 = 0x1a6
    unsigned long long detectedFormFieldsRecognitionConfidence;	// 424 = 0x1a8
    PDFDetectedForm *detectedForm;	// 432 = 0x1b0
    NSMutableArray *formFieldGroups;	// 440 = 0x1b8
    NSMutableDictionary *persistentApplicationData;	// 448 = 0x1c0
}

- (void).cxx_destruct;	// IMP=0x00000000000ae2cc

@end

