//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDFPage, PDFRenderingProperties;
@protocol PDFTilePoolDelegate;

__attribute__((visibility("hidden")))
@interface TileRenderRequest : NSObject
{
    id <PDFTilePoolDelegate> target;	// 8 = 0x8
    PDFPage *page;	// 16 = 0x10
    PDFRenderingProperties *renderingProperties;	// 24 = 0x18
    struct CGRect tileFrame;	// 32 = 0x20
    double zoomFactor;	// 64 = 0x40
    struct CGAffineTransform matrix;	// 72 = 0x48
    int tag;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000004408b

@end
