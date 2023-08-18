#include "Python.h"
#include "pycore_moduleobject.h"  // _PyModule_GetState()
#include "structmember.h"         // PyMemberDef
#include "pycore_runtime.h"       // _Py_ID()
#include "clinic/_operator.c.h"

typedef struct {
    PyObject *itemgetter_type;
    PyObject *attrgetter_type;
    PyObject *methodcaller_type;
} _operator_state;

static inline _operator_state*
get_operator_state(PyObject *module)
{
    void *state = _PyModule_GetState(module);
    assert(state != NULL);
    return (_operator_state *)state;
}

/*[clinic input]
module _operator
[clinic start generated code]*/
/*[clinic end generated code: output=da39a3ee5e6b4b0d input=672ecf48487521e7]*/

PyDoc_STRVAR(operator_doc,
"Operator interface.\n\
\n\
This module exports a set of functions implemented in C corresponding\n\
to the intrinsic operators of Python.  For example, operator.add(x, y)\n\
is equivalent to the expression x+y.  The function names are those\n\
used for special methods; variants without leading and trailing\n\
'__' are also provided for convenience.");


/*[clinic input]
_operator.truth -> bool

    a: object
    /

Return True if a is true, False otherwise.
[clinic start generated code]*/

static int
_operator_truth_impl(PyObject *module, PyObject *a)
/*[clinic end generated code: output=eaf87767234fa5d7 input=bc74a4cd90235875]*/
{
    return PyObject_IsTrue(a);
}

/*[clinic input]
_operator.add

    a: object
    b: object
    /

Same as a + b.
[clinic start generated code]*/

static PyObject *
_operator_add_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=8292984204f45164 input=5efe3bff856ac215]*/
{
    return PyNumber_Add(a, b);
}

/*[clinic input]
_operator.sub = _operator.add

Same as a - b.
[clinic start generated code]*/

static PyObject *
_operator_sub_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=4adfc3b888c1ee2e input=6494c6b100b8e795]*/
{
    return PyNumber_Subtract(a, b);
}

/*[clinic input]
_operator.mul = _operator.add

Same as a * b.
[clinic start generated code]*/

static PyObject *
_operator_mul_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=d24d66f55a01944c input=2368615b4358b70d]*/
{
    return PyNumber_Multiply(a, b);
}

/*[clinic input]
_operator.matmul = _operator.add

Same as a @ b.
[clinic start generated code]*/

static PyObject *
_operator_matmul_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=a20d917eb35d0101 input=9ab304e37fb42dd4]*/
{
    return PyNumber_MatrixMultiply(a, b);
}

/*[clinic input]
_operator.floordiv = _operator.add

Same as a // b.
[clinic start generated code]*/

static PyObject *
_operator_floordiv_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=df26b71a60589f99 input=bb2e88ba446c612c]*/
{
    return PyNumber_FloorDivide(a, b);
}

/*[clinic input]
_operator.truediv = _operator.add

Same as a / b.
[clinic start generated code]*/

static PyObject *
_operator_truediv_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=0e6a959944d77719 input=ecbb947673f4eb1f]*/
{
    return PyNumber_TrueDivide(a, b);
}

/*[clinic input]
_operator.mod = _operator.add

Same as a % b.
[clinic start generated code]*/

static PyObject *
_operator_mod_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=9519822f0bbec166 input=102e19b422342ac1]*/
{
    return PyNumber_Remainder(a, b);
}

/*[clinic input]
_operator.neg

    a: object
    /

Same as -a.
[clinic start generated code]*/

static PyObject *
_operator_neg(PyObject *module, PyObject *a)
/*[clinic end generated code: output=36e08ecfc6a1c08c input=84f09bdcf27c96ec]*/
{
    return PyNumber_Negative(a);
}

/*[clinic input]
_operator.pos = _operator.neg

Same as +a.
[clinic start generated code]*/

static PyObject *
_operator_pos(PyObject *module, PyObject *a)
/*[clinic end generated code: output=dad7a126221dd091 input=b6445b63fddb8772]*/
{
    return PyNumber_Positive(a);
}

/*[clinic input]
_operator.abs = _operator.neg

Same as abs(a).
[clinic start generated code]*/

static PyObject *
_operator_abs(PyObject *module, PyObject *a)
/*[clinic end generated code: output=1389a93ba053ea3e input=341d07ba86f58039]*/
{
    return PyNumber_Absolute(a);
}

/*[clinic input]
_operator.inv = _operator.neg

Same as ~a.
[clinic start generated code]*/

static PyObject *
_operator_inv(PyObject *module, PyObject *a)
/*[clinic end generated code: output=a56875ba075ee06d input=b01a4677739f6eb2]*/
{
    return PyNumber_Invert(a);
}

/*[clinic input]
_operator.invert = _operator.neg

Same as ~a.
[clinic start generated code]*/

static PyObject *
_operator_invert(PyObject *module, PyObject *a)
/*[clinic end generated code: output=406b5aa030545fcc input=7f2d607176672e55]*/
{
    return PyNumber_Invert(a);
}

/*[clinic input]
_operator.lshift = _operator.add

Same as a << b.
[clinic start generated code]*/

static PyObject *
_operator_lshift_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=37f7e52c41435bd8 input=746e8a160cbbc9eb]*/
{
    return PyNumber_Lshift(a, b);
}

/*[clinic input]
_operator.rshift = _operator.add

Same as a >> b.
[clinic start generated code]*/

static PyObject *
_operator_rshift_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=4593c7ef30ec2ee3 input=d2c85bb5a64504c2]*/
{
    return PyNumber_Rshift(a, b);
}

/*[clinic input]
_operator.not_ = _operator.truth

Same as not a.
[clinic start generated code]*/

static int
_operator_not__impl(PyObject *module, PyObject *a)
/*[clinic end generated code: output=743f9c24a09759ef input=854156d50804d9b8]*/
{
    return PyObject_Not(a);
}

/*[clinic input]
_operator.and_ = _operator.add

Same as a & b.
[clinic start generated code]*/

static PyObject *
_operator_and__impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=93c4fe88f7b76d9e input=4f3057c90ec4c99f]*/
{
    return PyNumber_And(a, b);
}

/*[clinic input]
_operator.xor = _operator.add

Same as a ^ b.
[clinic start generated code]*/

static PyObject *
_operator_xor_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=b24cd8b79fde0004 input=3c5cfa7253d808dd]*/
{
    return PyNumber_Xor(a, b);
}

/*[clinic input]
_operator.or_ = _operator.add

Same as a | b.
[clinic start generated code]*/

static PyObject *
_operator_or__impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=58024867b8d90461 input=b40c6c44f7c79c09]*/
{
    return PyNumber_Or(a, b);
}

/*[clinic input]
_operator.iadd = _operator.add

Same as a += b.
[clinic start generated code]*/

static PyObject *
_operator_iadd_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=07dc627832526eb5 input=d22a91c07ac69227]*/
{
    return PyNumber_InPlaceAdd(a, b);
}

/*[clinic input]
_operator.isub = _operator.add

Same as a -= b.
[clinic start generated code]*/

static PyObject *
_operator_isub_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=4513467d23b5e0b1 input=4591b00d0a0ccafd]*/
{
    return PyNumber_InPlaceSubtract(a, b);
}

/*[clinic input]
_operator.imul = _operator.add

Same as a *= b.
[clinic start generated code]*/

static PyObject *
_operator_imul_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=5e87dacd19a71eab input=0e01fb8631e1b76f]*/
{
    return PyNumber_InPlaceMultiply(a, b);
}

/*[clinic input]
_operator.imatmul = _operator.add

Same as a @= b.
[clinic start generated code]*/

static PyObject *
_operator_imatmul_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=d603cbdf716ce519 input=bb614026372cd542]*/
{
    return PyNumber_InPlaceMatrixMultiply(a, b);
}

/*[clinic input]
_operator.ifloordiv = _operator.add

Same as a //= b.
[clinic start generated code]*/

static PyObject *
_operator_ifloordiv_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=535336048c681794 input=9df3b5021cff4ca1]*/
{
    return PyNumber_InPlaceFloorDivide(a, b);
}

/*[clinic input]
_operator.itruediv = _operator.add

Same as a /= b.
[clinic start generated code]*/

static PyObject *
_operator_itruediv_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=28017fbd3563952f input=9a1ee01608f5f590]*/
{
    return PyNumber_InPlaceTrueDivide(a, b);
}

/*[clinic input]
_operator.imod = _operator.add

Same as a %= b.
[clinic start generated code]*/

static PyObject *
_operator_imod_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=f7c540ae0fc70904 input=d0c384a3ce38e1dd]*/
{
    return PyNumber_InPlaceRemainder(a, b);
}

/*[clinic input]
_operator.ilshift = _operator.add

Same as a <<= b.
[clinic start generated code]*/

static PyObject *
_operator_ilshift_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=e73a8fee1ac18749 input=e21b6b310f54572e]*/
{
    return PyNumber_InPlaceLshift(a, b);
}

/*[clinic input]
_operator.irshift = _operator.add

Same as a >>= b.
[clinic start generated code]*/

static PyObject *
_operator_irshift_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=97f2af6b5ff2ed81 input=6778dbd0f6e1ec16]*/
{
    return PyNumber_InPlaceRshift(a, b);
}

/*[clinic input]
_operator.iand = _operator.add

Same as a &= b.
[clinic start generated code]*/

static PyObject *
_operator_iand_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=4599e9d40cbf7d00 input=71dfd8e70c156a7b]*/
{
    return PyNumber_InPlaceAnd(a, b);
}

/*[clinic input]
_operator.ixor = _operator.add

Same as a ^= b.
[clinic start generated code]*/

static PyObject *
_operator_ixor_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=5ff881766872be03 input=695c32bec0604d86]*/
{
    return PyNumber_InPlaceXor(a, b);
}

/*[clinic input]
_operator.ior = _operator.add

Same as a |= b.
[clinic start generated code]*/

static PyObject *
_operator_ior_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=48aac319445bf759 input=8f01d03eda9920cf]*/
{
    return PyNumber_InPlaceOr(a, b);
}

/*[clinic input]
_operator.concat = _operator.add

Same as a + b, for a and b sequences.
[clinic start generated code]*/

static PyObject *
_operator_concat_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=80028390942c5f11 input=8544ccd5341a3658]*/
{
    return PySequence_Concat(a, b);
}

/*[clinic input]
_operator.iconcat = _operator.add

Same as a += b, for a and b sequences.
[clinic start generated code]*/

static PyObject *
_operator_iconcat_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=3ea0a162ebb2e26d input=8f5fe5722fcd837e]*/
{
    return PySequence_InPlaceConcat(a, b);
}

/*[clinic input]
_operator.contains -> bool

    a: object
    b: object
    /

Same as b in a (note reversed operands).
[clinic start generated code]*/

static int
_operator_contains_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=413b4dbe82b6ffc1 input=9122a69b505fde13]*/
{
    return PySequence_Contains(a, b);
}

/*[clinic input]
_operator.indexOf -> Py_ssize_t

    a: object
    b: object
    /

Return the first index of b in a.
[clinic start generated code]*/

static Py_ssize_t
_operator_indexOf_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=c6226d8e0fb60fa6 input=8be2e43b6a6fffe3]*/
{
    return PySequence_Index(a, b);
}

/*[clinic input]
_operator.countOf = _operator.indexOf

Return the number of items in a which are, or which equal, b.
[clinic start generated code]*/

static Py_ssize_t
_operator_countOf_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=9e1623197daf3382 input=93ea57f170f3f0bb]*/
{
    return PySequence_Count(a, b);
}

/*[clinic input]
_operator.getitem

    a: object
    b: object
    /

Same as a[b].
[clinic start generated code]*/

static PyObject *
_operator_getitem_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=6c8d8101a676e594 input=6682797320e48845]*/
{
    return PyObject_GetItem(a, b);
}

/*[clinic input]
_operator.setitem

    a: object
    b: object
    c: object
    /

Same as a[b] = c.
[clinic start generated code]*/

static PyObject *
_operator_setitem_impl(PyObject *module, PyObject *a, PyObject *b,
                       PyObject *c)
/*[clinic end generated code: output=1324f9061ae99e25 input=ceaf453c4d3a58df]*/
{
    if (-1 == PyObject_SetItem(a, b, c))
        return NULL;
    Py_RETURN_NONE;
}

/*[clinic input]
_operator.delitem = _operator.getitem

Same as del a[b].
[clinic start generated code]*/

static PyObject *
_operator_delitem_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=db18f61506295799 input=991bec56a0d3ec7f]*/
{
    if (-1 == PyObject_DelItem(a, b))
        return NULL;
    Py_RETURN_NONE;
}

/*[clinic input]
_operator.eq

    a: object
    b: object
    /

Same as a == b.
[clinic start generated code]*/

static PyObject *
_operator_eq_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=8d7d46ed4135677c input=586fca687a95a83f]*/
{
    return PyObject_RichCompare(a, b, Py_EQ);
}

/*[clinic input]
_operator.ne = _operator.eq

Same as a != b.
[clinic start generated code]*/

static PyObject *
_operator_ne_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=c99bd0c3a4c01297 input=5d88f23d35e9abac]*/
{
    return PyObject_RichCompare(a, b, Py_NE);
}

/*[clinic input]
_operator.lt = _operator.eq

Same as a < b.
[clinic start generated code]*/

static PyObject *
_operator_lt_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=082d7c45c440e535 input=34a59ad6d39d3a2b]*/
{
    return PyObject_RichCompare(a, b, Py_LT);
}

/*[clinic input]
_operator.le = _operator.eq

Same as a <= b.
[clinic start generated code]*/

static PyObject *
_operator_le_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=00970a2923d0ae17 input=b812a7860a0bef44]*/
{
    return PyObject_RichCompare(a, b, Py_LE);
}

/*[clinic input]
_operator.gt = _operator.eq

Same as a > b.
[clinic start generated code]*/

static PyObject *
_operator_gt_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=8d373349ecf25641 input=9bdb45b995ada35b]*/
{
    return PyObject_RichCompare(a, b, Py_GT);
}

/*[clinic input]
_operator.ge = _operator.eq

Same as a >= b.
[clinic start generated code]*/

static PyObject *
_operator_ge_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=7ce3882256d4b137 input=cf1dc4a5ca9c35f5]*/
{
    return PyObject_RichCompare(a, b, Py_GE);
}

/*[clinic input]
_operator.pow = _operator.add

Same as a ** b.
[clinic start generated code]*/

static PyObject *
_operator_pow_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=09e668ad50036120 input=690b40f097ab1637]*/
{
    return PyNumber_Power(a, b, Py_None);
}

/*[clinic input]
_operator.ipow = _operator.add

Same as a **= b.
[clinic start generated code]*/

static PyObject *
_operator_ipow_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=7189ff4d4367c808 input=f00623899d07499a]*/
{
    return PyNumber_InPlacePower(a, b, Py_None);
}

/*[clinic input]
_operator.index

    a: object
    /

Same as a.__index__()
[clinic start generated code]*/

static PyObject *
_operator_index(PyObject *module, PyObject *a)
/*[clinic end generated code: output=d972b0764ac305fc input=6f54d50ea64a579c]*/
{
    return PyNumber_Index(a);
}

/*[clinic input]
_operator.is_ = _operator.add

Same as a is b.
[clinic start generated code]*/

static PyObject *
_operator_is__impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=bcd47a402e482e1d input=5fa9b97df03c427f]*/
{
    PyObject *result = Py_Is(a, b) ? Py_True : Py_False;
    return Py_NewRef(result);
}

/*[clinic input]
_operator.is_not = _operator.add

Same as a is not b.
[clinic start generated code]*/

static PyObject *
_operator_is_not_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=491a1f2f81f6c7f9 input=5a93f7e1a93535f1]*/
{
    PyObject *result;
    result = (a != b) ? Py_True : Py_False;
    Py_INCREF(result);
    return result;
}

/* compare_digest **********************************************************/

/*
 * timing safe compare
 *
 * Returns 1 of the strings are equal.
 * In case of len(a) != len(b) the function tries to keep the timing
 * dependent on the length of b. CPU cache locally may still alter timing
 * a bit.
 */
static int
_tscmp(const unsigned char *a, const unsigned char *b,
        Py_ssize_t len_a, Py_ssize_t len_b)
{
    /* The volatile type declarations make sure that the compiler has no
     * chance to optimize and fold the code in any way that may change
     * the timing.
     */
    volatile Py_ssize_t length;
    volatile const unsigned char *left;
    volatile const unsigned char *right;
    Py_ssize_t i;
    volatile unsigned char result;

    /* loop count depends on length of b */
    length = len_b;
    left = NULL;
    right = b;

    /* don't use else here to keep the amount of CPU instructions constant,
     * volatile forces re-evaluation
     *  */
    if (len_a == length) {
        left = *((volatile const unsigned char**)&a);
        result = 0;
    }
    if (len_a != length) {
        left = b;
        result = 1;
    }

    for (i=0; i < length; i++) {
        result |= *left++ ^ *right++;
    }

    return (result == 0);
}

/*[clinic input]
_operator.length_hint -> Py_ssize_t

    obj: object
    default: Py_ssize_t = 0
    /

Return an estimate of the number of items in obj.

This is useful for presizing containers when building from an iterable.

If the object supports len(), the result will be exact.
Otherwise, it may over- or under-estimate by an arbitrary amount.
The result will be an integer >= 0.
[clinic start generated code]*/

static Py_ssize_t
_operator_length_hint_impl(PyObject *module, PyObject *obj,
                           Py_ssize_t default_value)
/*[clinic end generated code: output=01d469edc1d612ad input=65ed29f04401e96a]*/
{
    return PyObject_LengthHint(obj, default_value);
}

/* NOTE: Keep in sync with _hashopenssl.c implementation. */

/*[clinic input]
_operator._compare_digest = _operator.eq

Return 'a == b'.

This function uses an approach designed to prevent
timing analysis, making it appropriate for cryptography.

a and b must both be of the same type: either str (ASCII only),
or any bytes-like object.

Note: If a and b are of different lengths, or if an error occurs,
a timing attack could theoretically reveal information about the
types and lengths of a and b--but not their values.
[clinic start generated code]*/

static PyObject *
_operator__compare_digest_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=11d452bdd3a23cbc input=9ac7e2c4e30bc356]*/
{
    int rc;

    /* ASCII unicode string */
    if(PyUnicode_Check(a) && PyUnicode_Check(b)) {
        if (PyUnicode_READY(a) == -1 || PyUnicode_READY(b) == -1) {
            return NULL;
        }
        if (!PyUnicode_IS_ASCII(a) || !PyUnicode_IS_ASCII(b)) {
            PyErr_SetString(PyExc_TypeError,
                            "comparing strings with non-ASCII characters is "
                            "not supported");
            return NULL;
        }

        rc = _tscmp(PyUnicode_DATA(a),
                    PyUnicode_DATA(b),
                    PyUnicode_GET_LENGTH(a),
                    PyUnicode_GET_LENGTH(b));
    }
    /* fallback to buffer interface for bytes, bytearray and other */
    else {
        Py_buffer view_a;
        Py_buffer view_b;

        if (PyObject_CheckBuffer(a) == 0 && PyObject_CheckBuffer(b) == 0) {
            PyErr_Format(PyExc_TypeError,
                         "unsupported operand types(s) or combination of types: "
                         "'%.100s' and '%.100s'",
                         Py_TYPE(a)->tp_name, Py_TYPE(b)->tp_name);
            return NULL;
        }

        if (PyObject_GetBuffer(a, &view_a, PyBUF_SIMPLE) == -1) {
            return NULL;
        }
        if (view_a.ndim > 1) {
            PyErr_SetString(PyExc_BufferError,
                            "Buffer must be single dimension");
            PyBuffer_Release(&view_a);
            return NULL;
        }

        if (PyObject_GetBuffer(b, &view_b, PyBUF_SIMPLE) == -1) {
            PyBuffer_Release(&view_a);
            return NULL;
        }
        if (view_b.ndim > 1) {
            PyErr_SetString(PyExc_BufferError,
                            "Buffer must be single dimension");
            PyBuffer_Release(&view_a);
            PyBuffer_Release(&view_b);
            return NULL;
        }

        rc = _tscmp((const unsigned char*)view_a.buf,
                    (const unsigned char*)view_b.buf,
                    view_a.len,
                    view_b.len);

        PyBuffer_Release(&view_a);
        PyBuffer_Release(&view_b);
    }

    return PyBool_FromLong(rc);
}

PyDoc_STRVAR(_operator_call__doc__,
"call($module, obj, /, *args, **kwargs)\n"
"--\n"
"\n"
"Same as obj(*args, **kwargs).");

#define _OPERATOR_CALL_METHODDEF    \
    {"call", _PyCFunction_CAST(_operator_call), METH_FASTCALL | METH_KEYWORDS, _operator_call__doc__},

static PyObject *
_operator_call(PyObject *module, PyObject *const *args, Py_ssize_t nargs, PyObject *kwnames)
{
    if (!_PyArg_CheckPositional("call", nargs, 1, PY_SSIZE_T_MAX)) {
        return NULL;
    }
    return PyObject_Vectorcall(