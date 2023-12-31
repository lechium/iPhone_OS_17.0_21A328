//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestTableViewDataSource : NSObject
{
    NSMutableDictionary *_rowCountMap;	// 8 = 0x8
    NSMutableDictionary *_visibleCellDataMap;	// 16 = 0x10
    NSMutableDictionary *_headerDataMap;	// 24 = 0x18
    NSMutableDictionary *_footerDataMap;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000a8107d
- (id)viewForFooterInSection:(long long)arg1;	// IMP=0x0000000000a80ff5
- (id)viewForHeaderInSection:(long long)arg1;	// IMP=0x0000000000a80f6d
- (double)heightForFooterInSection:(long long)arg1;	// IMP=0x0000000000a80eca
- (double)heightForHeaderInSection:(long long)arg1;	// IMP=0x0000000000a80e27
- (id)titleForFooterInSection:(long long)arg1;	// IMP=0x0000000000a80d9f
- (id)titleForHeaderInSection:(long long)arg1;	// IMP=0x0000000000a80d17
- (double)heightForRowAtIndexPath:(id)arg1;	// IMP=0x0000000000a80ca7
- (id)cellForRowAtIndexPath:(id)arg1;	// IMP=0x0000000000a80b84
- (long long)numberOfRowsInSection:(long long)arg1;	// IMP=0x0000000000a80b08
@property(readonly, nonatomic) long long numberOfSections;
- (void)setFooterData:(id)arg1 forSection:(long long)arg2;	// IMP=0x0000000000a80a72
- (void)setHeaderData:(id)arg1 forSection:(long long)arg2;	// IMP=0x0000000000a809f2
- (void)setCellData:(id)arg1 forRowAtIndexPath:(id)arg2;	// IMP=0x0000000000a809dc
- (void)setNumberOfRows:(long long)arg1 forSection:(long long)arg2;	// IMP=0x0000000000a8094d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a808b8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a8073b
- (id)init;	// IMP=0x0000000000a80648

@end

