//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICTable.h>

@interface ICTable (UI)
- (id)joinedAttributedStringForColumns:(id)arg1 rows:(id)arg2 deepCopyInlineAttachments:(_Bool)arg3 note:(id)arg4 parentAttachment:(id)arg5;	// IMP=0x006000000000bb48
- (id)joinedAttributedStringForColumns:(id)arg1 rows:(id)arg2;	// IMP=0x006000000000bb1f
- (id)textStorageForColumn:(id)arg1;	// IMP=0x006000000000b8fd
- (void)enumerateTextStoragesForColumnIndexes:(id)arg1 rowIndexes:(id)arg2 undoTarget:(id)arg3 undoManager:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;	// IMP=0x006000000000b3c4
- (id)documentForCellAtColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2;	// IMP=0x006000000000b144
- (id)mergeableStringForColumnID:(id)arg1 rowID:(id)arg2 createIfNeeded:(_Bool)arg3;	// IMP=0x006000000000b037
- (id)textStorageForCellAtColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2 undoTarget:(id)arg3 undoManager:(id)arg4;	// IMP=0x006000000000af68
- (id)textStorageForCellAtColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2;	// IMP=0x006000000000af50
- (id)textStorageForCellAtColumnID:(id)arg1 rowID:(id)arg2 undoTarget:(id)arg3 undoManager:(id)arg4;	// IMP=0x006000000000ae2d
- (id)textStorageForCellAtColumnID:(id)arg1 rowID:(id)arg2;	// IMP=0x006000000000ae15
- (id)p_attributedStringForCell:(id)arg1 inTable:(id)arg2 atColumn:(unsigned long long)arg3 row:(unsigned long long)arg4 shouldFilter:(_Bool)arg5 context:(id)arg6;	// IMP=0x006000000013cbfa
- (id)attributedStringWithNSTextTablesForColumns:(id)arg1 rows:(id)arg2 context:(id)arg3 forPrinting:(_Bool)arg4;	// IMP=0x006000000013c742
- (id)attributedStringWithNSTextTablesForColumns:(id)arg1 rows:(id)arg2 context:(id)arg3;	// IMP=0x006000000013c72d
@end

