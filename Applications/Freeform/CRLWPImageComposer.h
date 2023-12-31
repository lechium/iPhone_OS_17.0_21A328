//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLImage;

@interface CRLWPImageComposer : NSObject
{
    CRLImage *_compositedImage;	// 8 = 0x8
    CRLImage *_baseImage;	// 16 = 0x10
    double _screenScale;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000003c6e25
@property(nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property(retain, nonatomic) CRLImage *baseImage; // @synthesize baseImage=_baseImage;
@property(retain, nonatomic) CRLImage *compositedImage; // @synthesize compositedImage=_compositedImage;
- (id)overlayImage:(id)arg1 usingFrame:(struct CGRect)arg2;	// IMP=0x00100000003c69be
- (id)initWithBaseImage:(id)arg1 screenScale:(double)arg2;	// IMP=0x00100000003c68cf

@end

