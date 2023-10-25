//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, SUUIClientContext, SUUILayoutCache, SUUIResourceLoader, UIViewController;

__attribute__((visibility("hidden")))
@interface SUUINavigationBarContext : NSObject
{
    SUUIClientContext *_clientContext;	// 8 = 0x8
    double _maximumNavigationBarWidth;	// 16 = 0x10
    NSOperationQueue *_operationQueue;	// 24 = 0x18
    UIViewController *_parentViewController;	// 32 = 0x20
    SUUIResourceLoader *_resourceLoader;	// 40 = 0x28
    SUUILayoutCache *_textLayoutCache;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000003ba91
@property(retain, nonatomic) SUUILayoutCache *textLayoutCache; // @synthesize textLayoutCache=_textLayoutCache;
@property(retain, nonatomic) SUUIResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) double maximumNavigationBarWidth; // @synthesize maximumNavigationBarWidth=_maximumNavigationBarWidth;
@property(retain, nonatomic) SUUIClientContext *clientContext; // @synthesize clientContext=_clientContext;

@end
