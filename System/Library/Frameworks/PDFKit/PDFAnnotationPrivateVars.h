//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSIndexSet, NSLayoutManager, NSLock, NSMutableDictionary, NSString, NSTextStorage, NSUUID, PDFAKAnnotationAdaptor, PDFAccessibilityNode, PDFAnnotation, PDFPage;
@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface PDFAnnotationPrivateVars : NSObject
{
    _Bool loggingEnabled;	// 8 = 0x8
    _Bool shouldExport;	// 9 = 0x9
    PDFPage *page;	// 16 = 0x10
    struct CGPDFDictionary *sourceDictionary;	// 24 = 0x18
    struct __CFDictionary *dictionaryRef;	// 32 = 0x20
    NSUUID *pdfAnnotationUUID;	// 40 = 0x28
    struct CGPDFAnnotation *cgAnnotation;	// 48 = 0x30
    NSMutableDictionary *PDFAnnotationDictionary;	// 56 = 0x38
    NSDictionary *PDFAnnotationKeyMapping;	// 64 = 0x40
    NSMutableDictionary *internalPDFAnnotationDictionary;	// 72 = 0x48
    struct CGPDFForm *normalAppearance;	// 80 = 0x50
    struct CGPDFForm *rolloverAppearance;	// 88 = 0x58
    struct CGPDFForm *downAppearance;	// 96 = 0x60
    struct CGPDFForm *normalOffAppearance;	// 104 = 0x68
    struct CGPDFForm *rolloverOffAppearance;	// 112 = 0x70
    struct CGPDFForm *downOffAppearance;	// 120 = 0x78
    _Bool saveAppearance;	// 128 = 0x80
    struct os_unfair_lock_s cachedAppearancesLock;	// 132 = 0x84
    NSMutableDictionary *cachedAppearances;	// 136 = 0x88
    _Bool isSelected;	// 144 = 0x90
    _Bool isHighlighted;	// 145 = 0x91
    NSIndexSet *quadPointsIndexSet;	// 152 = 0x98
    struct CGPath *quadPointsPath;	// 160 = 0xa0
    PDFAnnotation *parent;	// 168 = 0xa8
    PDFAnnotation *popup;	// 176 = 0xb0
    struct CGPDFDictionary *popupDictionary;	// 184 = 0xb8
    _Bool popupDrawCloseWidget;	// 192 = 0xc0
    _Bool popupDrawText;	// 193 = 0xc1
    struct CGPath **cgPaths;	// 200 = 0xc8
    NSLock *pathLock;	// 208 = 0xd0
    _Bool isSignature;	// 216 = 0xd8
    _Bool shouldBurnIn;	// 217 = 0xd9
    NSString *widgetOnStateString;	// 224 = 0xe0
    id control;	// 232 = 0xe8
    _Bool pointerIsOverAnnotation;	// 240 = 0xf0
    _Bool shouldHideInteractiveBackgroundColor;	// 241 = 0xf1
    NSLayoutManager *layoutManager;	// 248 = 0xf8
    NSTextStorage *textStorage;	// 256 = 0x100
    struct UIEdgeInsets textInsets;	// 264 = 0x108
    NSString *autoFillTextContentType;	// 296 = 0x128
    unsigned long long formContentType;	// 304 = 0x130
    _Bool isDetectedCheckbox;	// 312 = 0x138
    _Bool isDetectedSignature;	// 313 = 0x139
    _Bool isAutofillNewContextStart;	// 314 = 0x13a
    double suggestedLineHeight;	// 320 = 0x140
    _Bool restoreLinePoints;	// 328 = 0x148
    _Bool restoreQuadPoints;	// 329 = 0x149
    struct CGPoint startPoint;	// 336 = 0x150
    struct CGPoint endPoint;	// 352 = 0x160
    NSArray *quadPoints;	// 368 = 0x170
    _Bool isTransparent;	// 376 = 0x178
    PDFAccessibilityNode *accessibilityNode;	// 384 = 0x180
    double scaleFactor;	// 392 = 0x188
    _Bool isFullyConstructed;	// 400 = 0x190
    _Bool constructingDictionaryRef;	// 401 = 0x191
    PDFAKAnnotationAdaptor *akAnnotationAdaptor;	// 408 = 0x198
    id <NSCopying> akAnnotationForCopying;	// 416 = 0x1a0
}

- (void).cxx_destruct;	// IMP=0x000000000000892e

@end

