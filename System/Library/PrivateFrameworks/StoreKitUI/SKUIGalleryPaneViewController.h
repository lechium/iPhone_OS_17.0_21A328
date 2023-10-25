//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class SKUIEmbeddedMediaView, SKUIMediaComponent;

__attribute__((visibility("hidden")))
@interface SKUIGalleryPaneViewController : UIViewController
{
    SKUIMediaComponent *_component;	// 8 = 0x8
    long long _galleryIndex;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000033a95a
@property(readonly, nonatomic) long long galleryIndex; // @synthesize galleryIndex=_galleryIndex;
@property(readonly, nonatomic) SKUIMediaComponent *component; // @synthesize component=_component;
@property(readonly, nonatomic) SKUIEmbeddedMediaView *mediaView;
- (id)initWithMediaComponent:(id)arg1 galleryIndex:(long long)arg2;	// IMP=0x000000000033a863

@end
