//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextPosition.h>

@class PDFPage;

__attribute__((visibility("hidden")))
@interface PDFTextPosition : UITextPosition
{
    PDFPage *_page;	// 8 = 0x8
    long long _offset;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000213df
- (id)description;	// IMP=0x000000000002132b
- (id)page;	// IMP=0x0000000000021312
- (long long)offset;	// IMP=0x0000000000021301
- (id)initWithOffset:(long long)arg1 onPage:(id)arg2;	// IMP=0x0000000000021288

@end

