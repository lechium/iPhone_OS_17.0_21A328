//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/FPItemCollection.h>

@protocol NSFileProviderEnumerator;

@interface FPDirectCollection : FPItemCollection
{
    id <NSFileProviderEnumerator> _enumerator;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000554c
- (id)description;	// IMP=0x0010000000005504
- (id)createDataSourceWithSortDescriptors:(id)arg1;	// IMP=0x00100000000054c6
- (id)initWithEnumerator:(id)arg1;	// IMP=0x0010000000005453

@end
