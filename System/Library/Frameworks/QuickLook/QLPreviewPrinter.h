//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPrintPageRenderer.h>

@protocol QLPrintingProtocol;

__attribute__((visibility("hidden")))
@interface QLPreviewPrinter : UIPrintPageRenderer
{
    id <QLPrintingProtocol> _printer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000051da7
@property(readonly) id <QLPrintingProtocol> printer; // @synthesize printer=_printer;
- (void)drawPageAtIndex:(long long)arg1 inRect:(struct CGRect)arg2;	// IMP=0x0000000000051b5d
- (void)prepareForDrawingPages:(struct _NSRange)arg1;	// IMP=0x0000000000051ad8
- (long long)numberOfPages;	// IMP=0x00000000000519db
- (id)initWithPreviewPrinter:(id)arg1;	// IMP=0x0000000000051943

@end

