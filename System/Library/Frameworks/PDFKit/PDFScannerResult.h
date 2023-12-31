//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDFScannerResultPrivate;

__attribute__((visibility("hidden")))
@interface PDFScannerResult : NSObject
{
    PDFScannerResultPrivate *_private;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007b640
- (void)setButtonPressed:(_Bool)arg1;	// IMP=0x000000000007b611
- (_Bool)pointIsOnButton:(struct CGPoint)arg1 onPageLayer:(id)arg2;	// IMP=0x000000000007b4d1
- (_Bool)pointIsOnButton:(struct CGPoint)arg1;	// IMP=0x000000000007b3aa
- (_Bool)containsPoint:(struct CGPoint)arg1 onPageLayer:(id)arg2;	// IMP=0x000000000007b13b
- (_Bool)containsPoint:(struct CGPoint)arg1;	// IMP=0x000000000007b014
- (double)displayScaleOnPageLayer:(id)arg1;	// IMP=0x000000000007af18
- (void)setHighlightRef:(struct __DDHighlight *)arg1;	// IMP=0x000000000007aeda
- (struct __DDHighlight *)highlightRef;	// IMP=0x000000000007aecc
- (_Bool)hasActionsForResult;	// IMP=0x000000000007aea9
- (_Bool)resultIsPastDate;	// IMP=0x000000000007ae9c
- (id)rects;	// IMP=0x000000000007ae8a
- (struct CGRect)bounds;	// IMP=0x000000000007ae6e
- (id)ddResult;	// IMP=0x000000000007ae5c
- (id)initWithDDScannerResult:(id)arg1 foundOnPage:(id)arg2;	// IMP=0x000000000007a9da

@end

