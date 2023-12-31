//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSItemProvider.h>

@class NSData, NSMutableArray, NSProgress, NSString, NSURL, SKUIResourceLoader;

__attribute__((visibility("hidden")))
@interface SKUIArtworkItemProvider : NSItemProvider
{
    NSURL *_url;	// 8 = 0x8
    SKUIResourceLoader *_resourceLoader;	// 16 = 0x10
    NSProgress *_progress;	// 24 = 0x18
    NSData *_imageData;	// 32 = 0x20
    NSMutableArray *_completionHandlers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000007923a
@property(retain, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) SKUIResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x0000000000078fae
- (id)loadDataRepresentationForTypeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000078e91
- (id)initWithURL:(id)arg1 usingResourceLoader:(id)arg2;	// IMP=0x0000000000078c82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

