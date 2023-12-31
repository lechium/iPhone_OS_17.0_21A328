//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSObject.h>

@class SUUIClientContext, SUUIPreviewContainerViewController;

__attribute__((visibility("hidden")))
@interface SUUIClientContextPreviewContainer : IKJSObject
{
    SUUIClientContext *_clientContext;	// 8 = 0x8
    SUUIPreviewContainerViewController *_previewContainerViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001e236c
- (void)previewDocument:(id)arg1:(id)arg2;	// IMP=0x00000000001e2127
- (id)initWithAppContext:(id)arg1 clientContext:(id)arg2 previewContainerViewController:(id)arg3;	// IMP=0x00000000001e2082

@end

