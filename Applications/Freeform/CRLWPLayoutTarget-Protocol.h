//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CRLBezierPath, CRLCanvas, CRLWrapSegments, NSMutableArray, NSObject;
@protocol CRLWPColumnMetrics, CRLWPOffscreenColumn, CRLWPTextSource;

@protocol CRLWPLayoutTarget <NSObject>
@property(readonly, nonatomic) CRLWrapSegments *interiorWrapSegments;
@property(readonly, nonatomic) _Bool shouldWrapAroundExternalDrawables;
@property(readonly, nonatomic) _Bool layoutIsValid;
@property(readonly, nonatomic) _Bool textIsVertical;
@property(readonly, nonatomic) unsigned long long pageCount;
@property(readonly, nonatomic) unsigned long long pageNumber;
@property(readonly, nonatomic) _Bool wantsLineFragments;
@property(readonly, nonatomic) long long naturalDirection;
@property(readonly, nonatomic) long long naturalAlignment;
@property(readonly, nonatomic) long long verticalAlignment;
@property(readonly, nonatomic) unsigned long long autosizeFlags;
@property(readonly, nonatomic) struct CGPoint anchorPoint;
@property(readonly, nonatomic) struct CGPoint position;
@property(readonly, nonatomic) struct CGSize currentSize;
@property(readonly, nonatomic) struct CGSize maxSize;
@property(readonly, nonatomic) struct CGSize minSize;
@property(readonly, nonatomic) _Bool isInstructional;
@property(readonly, nonatomic) id <CRLWPTextSource> storage;
@property(readonly, nonatomic) id <CRLWPOffscreenColumn> nextTargetFirstColumn;
@property(readonly, nonatomic) id <CRLWPOffscreenColumn> previousTargetLastColumn;
@property(readonly, nonatomic) NSMutableArray *columns;
- (_Bool)descendersCannotClip;
- (CRLBezierPath *)interiorClippingPath;
- (void)setNeedsDisplayInTargetRect:(struct CGRect)arg1;
- (_Bool)isLastTarget;
- (NSObject<CRLWPColumnMetrics> *)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;

@optional
@property(readonly, nonatomic) _Bool alwaysIncludesSpaceAfter;
@property(readonly, nonatomic) _Bool alwaysIncludesSpaceBefore;
@property(readonly, nonatomic) Class inlineTableOfContentsLayoutClass;
@property(readonly, nonatomic) _Bool supportsPageNumbers;
@property(readonly, nonatomic) struct _NSRange restrictedLayoutCharRange;
@property(readonly, nonatomic) _Bool marginsAreMirrored;
@property(readonly, nonatomic) _Bool isLinked;
@property(readonly, nonatomic) _Bool repShouldPreventCaret;
@property(readonly, nonatomic) struct __CFLocale *hyphenationLocale;
@property(readonly, nonatomic) _Bool shouldHyphenate;
@property(readonly, nonatomic) CRLCanvas *canvas;
- (void)didLayoutIntoTarget;
- (void)willLayoutIntoTarget;
- (_Bool)invalidateForPageCountChange;
- (unsigned int)pageIndex;
@end
