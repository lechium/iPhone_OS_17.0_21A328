//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIImage, UIImageView;

@interface NavTrayWaypointCellActionImageView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    NSString *_style;	// 24 = 0x18
    double _weight;	// 32 = 0x20
    double _sideLength;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000028feec
- (struct CGSize)intrinsicContentSize;	// IMP=0x001000000028fed7
- (id)initWithImage:(id)arg1 style:(id)arg2 weight:(double)arg3 sideLength:(double)arg4;	// IMP=0x001000000028fa5c

@end
