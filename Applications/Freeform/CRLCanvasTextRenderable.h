//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CRLCanvasTextRenderable
{
}

+ (id)renderable;	// IMP=0x00400000003d6aad
+ (id)renderableFromTextLayer:(id)arg1;	// IMP=0x00100000003d6a64
@property(copy, nonatomic) NSString *alignmentMode;
@property(nonatomic) struct CGColor *foregroundColor;
@property(nonatomic) void *font;
@property(copy, nonatomic) NSString *truncationMode;
@property(nonatomic) double fontSize;
@property(copy, nonatomic) id string;
- (id)p_textLayer;	// IMP=0x00100000003d6b10
- (id)initWithTextLayer:(id)arg1;	// IMP=0x00100000003d6a35

@end
