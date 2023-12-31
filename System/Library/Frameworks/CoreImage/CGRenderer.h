//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CGRenderer : NSObject
{
    struct CGContext *context;	// 8 = 0x8
    _Bool drawEdgesFirst;	// 16 = 0x10
    _Bool drawWithSplines;	// 17 = 0x11
    int direction;	// 20 = 0x14
    struct CGSize separation;	// 24 = 0x18
}

@property _Bool drawWithSplines; // @synthesize drawWithSplines;
@property _Bool drawEdgesFirst; // @synthesize drawEdgesFirst;
@property struct CGSize separation; // @synthesize separation;
@property int direction; // @synthesize direction;
- (void)flushRender;	// IMP=0x00000000000d57e9
- (void)drawEdge:(id)arg1 withPath:(id)arg2;	// IMP=0x00000000000d5399
- (void)hyperlinkEdge:(id)arg1 from:(struct CGPoint)arg2 to:(struct CGPoint)arg3;	// IMP=0x00000000000d5238
- (void)_drawCubicSpline:(id)arg1;	// IMP=0x00000000000d4bbb
- (void)_drawPolyline:(id)arg1;	// IMP=0x00000000000d4926
- (void)drawNode:(id)arg1;	// IMP=0x00000000000d48cb
- (void)_drawNodeBadge:(id)arg1;	// IMP=0x00000000000d475e
- (void)_drawNodeContent:(id)arg1;	// IMP=0x00000000000d357a
- (struct CGColor *)_colorForNodeColor:(int)arg1;	// IMP=0x00000000000d330d
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;	// IMP=0x00000000000d3305
- (void)setFileTitle:(id)arg1;	// IMP=0x00000000000d32ff
- (void)setFileURL:(id)arg1;	// IMP=0x00000000000d32f9
- (void)dealloc;	// IMP=0x00000000000d32ba
- (id)init;	// IMP=0x00000000000d3270

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

