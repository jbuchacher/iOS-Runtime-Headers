/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDResources, NSMutableArray, EDWorkbook;



@interface EDProcessor : NSObject 
{
    EDWorkbook *mWorkbook;
    EDResources *mResources;
    NSMutableArray *mObjects;
}


- (void)dealloc;
- (id)initWithWorkbook:(id)arg1;
- (void)markObjectForPostProcessing:(id)arg1;
- (void)applyProcessorWithSheet:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isObjectSupported:(id)arg1;
     /* Encoded args for previous method: B12@0:4@8 */

- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;

@end